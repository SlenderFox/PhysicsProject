#pragma once
#include "Rigidbody.h"

class Circle : public Rigidbody
{
public:
	Circle();
	Circle(glm::vec2 pPosition, glm::vec2 pVelocity,
		float pRotation, float pAngularVelocity,
		float pMass, float pElasticity,
		float pLinearDrag, float pAngularDrag,
		bool pSolid, bool pWeighted,
		float pRadius, glm::vec4 pColour);
	~Circle();

	virtual void makeGizmo();

	void setColour(const glm::vec4 pColour) { m_colour = pColour; }
	glm::vec4 getColour() const { return m_colour; }

	void setRadius(const float pRadius) { m_radius = pRadius; }
	float getRadius() const { return m_radius; }

	void setSolid(const float pSolid) { m_isSolid = pSolid; }
	bool getSolid() const { return m_isSolid; }

	void setWeighted(const float pWeighted) { m_isWeighted = pWeighted; }
	bool getWeighted() const { return m_isWeighted; }

protected:
	glm::vec4	m_colour;	// The colour of the circle
	float			m_radius;	// The radius of the circle
};