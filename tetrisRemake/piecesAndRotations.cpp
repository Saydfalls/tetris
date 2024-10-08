// Piece types
int pieces[7][4][5][5] = {
		// I piece
			 {
				{
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 },
					{ 0, 1, 2, 1, 1 },
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 }
				},
				{
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 1, 0, 0 },
					{ 0, 0, 2, 0, 0 },
					{ 0, 0, 1, 0, 0 },
					{ 0, 0, 1, 0, 0 }
				},
				{
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 },
					{ 1, 1, 2, 1, 0 },
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 }
				},
				{
					{ 0, 0, 1, 0, 0 },
					{ 0, 0, 1, 0, 0 },
					{ 0, 0, 2, 0, 0 },
					{ 0, 0, 1, 0, 0 },
					{ 0, 0, 0, 0, 0 }
				}
			},
		// L piece
			 {
				{
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 1, 0, 0 },
					{ 0, 0, 2, 0, 0 },
					{ 0, 0, 1, 1, 0 },
					{ 0, 0, 0, 0, 0 }
				},
				{
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 },
					{ 0, 1, 2, 1, 0 },
					{ 0, 1, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 }
				},
				{
					{ 0, 0, 0, 0, 0 },
					{ 0, 1, 1, 0, 0 },
					{ 0, 0, 2, 0, 0 },
					{ 0, 0, 1, 0, 0 },
					{ 0, 0, 0, 0, 0 }
				},
				{
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 1, 0 },
					{ 0, 1, 2, 1, 0 },
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 }
				}
			},
		// Mirror L piece
			{
				{
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 1, 0, 0 },
					{ 0, 0, 2, 0, 0 },
					{ 0, 1, 1, 0, 0 },
					{ 0, 0, 0, 0, 0 }
				},
				{
					{ 0, 0, 0, 0, 0 },
					{ 0, 1, 0, 0, 0 },
					{ 0, 1, 2, 1, 0 },
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 }
				},
				{
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 1, 1, 0 },
					{ 0, 0, 2, 0, 0 },
					{ 0, 0, 1, 0, 0 },
					{ 0, 0, 0, 0, 0 }
				},
				{
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 },
					{ 0, 1, 2, 1, 0 },
					{ 0, 0, 0, 1, 0 },
					{ 0, 0, 0, 0, 0 }
				}
			},
		// N piece
			{
				{
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 1, 0 },
					{ 0, 0, 2, 1, 0 },
					{ 0, 0, 1, 0, 0 },
					{ 0, 0, 0, 0, 0 }
				},
				{
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 },
					{ 0, 1, 2, 0, 0 },
					{ 0, 0, 1, 1, 0 },
					{ 0, 0, 0, 0, 0 }
				},
				{
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 1, 0, 0 },
					{ 0, 1, 2, 0, 0 },
					{ 0, 1, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 }
				},
				{
					{ 0, 0, 0, 0, 0 },
					{ 0, 1, 1, 0, 0 },
					{ 0, 0, 2, 1, 0 },
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 }
				}
			},
		// Mirror N piece
			{
				{
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 1, 0, 0 },
					{ 0, 0, 2, 1, 0 },
					{ 0, 0, 0, 1, 0 },
					{ 0, 0, 0, 0, 0 }
				},
				{
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 2, 1, 0 },
					{ 0, 1, 1, 0, 0 },
					{ 0, 0, 0, 0, 0 }
				},
				{
					{ 0, 0, 0, 0, 0 },
					{ 0, 1, 0, 0, 0 },
					{ 0, 1, 2, 0, 0 },
					{ 0, 0, 1, 0, 0 },
					{ 0, 0, 0, 0, 0 }
				},
				{
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 1, 1, 0 },
					{ 0, 1, 2, 0, 0 },
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 }
				}
			},
		// T piece
			{
				{
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 1, 0, 0 },
					{ 0, 0, 2, 1, 0 },
					{ 0, 0, 1, 0, 0 },
					{ 0, 0, 0, 0, 0 }
				},
				{
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 },
					{ 0, 1, 2, 1, 0 },
					{ 0, 0, 1, 0, 0 },
					{ 0, 0, 0, 0, 0 }
				},
				{
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 1, 0, 0 },
					{ 0, 1, 2, 0, 0 },
					{ 0, 0, 1, 0, 0 },
					{ 0, 0, 0, 0, 0 }
				},
				{
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 1, 0, 0 },
					{ 0, 1, 2, 1, 0 },
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 }
				}
			},
		// square piece
			{ 
				{
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 2, 1, 0 },
					{ 0, 0, 1, 1, 0 },
					{ 0, 0, 0, 0, 0 }
				},
				{
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 2, 1, 0 },
					{ 0, 0, 1, 1, 0 },
					{ 0, 0, 0, 0, 0 }
				},
				{
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 2, 1, 0 },
					{ 0, 0, 1, 1, 0 },
					{ 0, 0, 0, 0, 0 }
				},
				{
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 2, 1, 0 },
					{ 0, 0, 1, 1, 0 },
					{ 0, 0, 0, 0, 0 }
				}
			}
};

// Starting Positions for Pieces
int initialPiecePositons[7][4][2] = {
	// I
	{
		{-2, -2},
		{-2, -3},
		{-2, -2},
		{-2, -3},
	},
	// L piece
	{
		{-2, -3},
		{-2, -3},
		{-2, -3},
		{-2, -2},
	},
	// Mirror L piece
	{
		{-2, -3},
		{-2, -2},
		{-2, -3},
		{-2, -3},
	},
	// N piece
	{
		{-2, -3},
		{-2, -3},
		{-2, -3},
		{-2, -2},
	},
	// Mirror N piece
	{
		{-2, -3},
		{-2, -3},
		{-2, -3},
		{-2, -2},
	},
	// T piece
	{
		{-2, -3},
		{-2, -3},
		{-2, -3},
		{-2, -2},
	},
	// square piece
	{
		{-2, -3},
		{-2, -3},
		{-2, -3},
		{-2, -3},
	}
}