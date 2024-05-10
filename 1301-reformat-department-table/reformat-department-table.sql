SELECT s.id,
    Jan.revenue AS Jan_Revenue,
    Feb.revenue AS Feb_Revenue,
    Mar.revenue AS Mar_Revenue,
    Apr.revenue AS Apr_Revenue,
    May.revenue AS May_Revenue,
    Jun.revenue AS Jun_Revenue,
    Jul.revenue AS Jul_Revenue,
    Aug.revenue AS Aug_Revenue,
    Sep.revenue AS Sep_Revenue,
    Oct.revenue AS Oct_Revenue,
    Nov.revenue AS Nov_Revenue,
    D.revenue AS Dec_Revenue
FROM (SELECT DISTINCT id FROM Department) AS s
LEFT JOIN Department AS Jan ON s.id = Jan.id AND Jan.month = 'Jan'
LEFT JOIN Department AS Feb ON s.id = Feb.id AND Feb.month = 'Feb'
LEFT JOIN Department AS Mar ON s.id = Mar.id AND Mar.month = 'Mar'
LEFT JOIN Department AS Apr ON s.id = Apr.id AND Apr.month = 'Apr'
LEFT JOIN Department AS May ON s.id = May.id AND May.month = 'May'
LEFT JOIN Department AS Jun ON s.id = Jun.id AND Jun.month = 'Jun'
LEFT JOIN Department AS Jul ON s.id = Jul.id AND Jul.month = 'Jul'
LEFT JOIN Department AS Aug ON s.id = Aug.id AND Aug.month = 'Aug'
LEFT JOIN Department AS Sep ON s.id = Sep.id AND Sep.month = 'Sep'
LEFT JOIN Department AS Oct ON s.id = Oct.id AND Oct.month = 'Oct'
LEFT JOIN Department AS Nov ON s.id = Nov.id AND Nov.month = 'Nov'
LEFT JOIN Department AS D ON s.id = D.id AND D.month = 'Dec'