#ifndef RENDERER_H
#define RENDERER_H

#include <vtkSmartPointer.h>
#include <vtkRenderer.h>
#include <vtkActor.h>

extern int k;

class Renderer
{
public:
    Renderer();
    vtkSmartPointer<vtkRenderer> renderer;
};

#endif // RENDERER_H