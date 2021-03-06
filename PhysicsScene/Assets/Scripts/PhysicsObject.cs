﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
public class PhysicsObject : MonoBehaviour
{
    public Material awakeMaterial = null;
    public Material sleepMaterial = null;

    private Rigidbody _rigidbody = null;

    bool wasSleeping = false;

    // Use this for initialization
    void Start ()
    {
        _rigidbody = GetComponent<Rigidbody>();
    }
    
    private void FixedUpdate()
    {
        if (_rigidbody.IsSleeping() && !wasSleeping && sleepMaterial != null)
        {
            wasSleeping = true;
            GetComponent<MeshRenderer>().material = sleepMaterial;
        }

        if (!_rigidbody.IsSleeping() && wasSleeping && awakeMaterial != null)
        {
            wasSleeping = false;
            GetComponent<MeshRenderer>().material = awakeMaterial;
        }
    }
}