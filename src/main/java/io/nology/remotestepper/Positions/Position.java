package io.nology.remotestepper.Positions;


import jakarta.persistence.Column;
import jakarta.persistence.Entity;
import jakarta.persistence.GeneratedValue;
import jakarta.persistence.GenerationType;
import jakarta.persistence.Id;

@Entity
public class Position {
	
	@Id
	@GeneratedValue(strategy = GenerationType.AUTO)
	Long id;
	
	@Column
	double x;
	
	@Column
	double y;
	
	@Column
	double z;
	
	@Column
	float feed;
	
	public Position() {}
	
	public Position(double x, double y, double z, float feed) {
		this.x = x;
		this.y = y;
		this.z = z;
		this.feed = feed;
	}
	
	public Long getId() {
		return id;
	}

	public void setId(Long id) {
		this.id = id;
	}

	public double getX() {
		return x;
	}

	public void setX(double x) {
		this.x = x;
	}

	public double getY() {
		return y;
	}

	public void setY(double y) {
		this.y = y;
	}

	public double getZ() {
		return z;
	}

	public void setZ(double z) {
		this.z = z;
	}

	public float getFeed() {
		return feed;
	}

	public void setFeed(float feed) {
		this.feed = feed;
	}
	

}
