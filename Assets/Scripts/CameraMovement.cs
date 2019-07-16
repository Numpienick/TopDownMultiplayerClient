using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraMovement : MonoBehaviour
{
    public GameObject followObject { set; private get; }

    float startPosY;
    void Start()
    {
        startPosY = transform.position.y;
    }

    void LateUpdate()
    {
        if (followObject != null)
        {
            transform.position = new Vector3(followObject.transform.position.x, startPosY, followObject.transform.position.z);
            transform.LookAt(followObject.transform);
        }
    }
}
