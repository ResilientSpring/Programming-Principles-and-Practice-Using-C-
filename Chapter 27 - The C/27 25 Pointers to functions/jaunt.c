struct Shape1 {

	enum Kind{circle, rectangle} kind;

};

void draw(struct Shape1* p) {

	switch (p->kind)
	{
	case circle:
		
		printf("draw as circle.\n");
		break;

	default:
		break;
	}

}