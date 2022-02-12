#  High Level Test Plan

|*Test ID|Description|Exp input|Exp output|Actual Output*|
|----|----|----|---|---|
|H_01| Customer can view products|	Choice|SUCCESS|	SUCCESS
|H_02| Customer can add products to cart|	Choice|	SUCCESS|	SUCCESS
|H_03|  Customer can order products |	Choice|	SUCCESS|	SUCCESS
|H_04|	Admin can view orders placed|	Choice|	SUCCESS|	SUCCESS
|H_05|	Admin can add records of employees|	Choice|SUCCESS|	SUCCESS
## Low Level Test Plan

|*Test ID|HL_ID|Description|Exp input|Exp Output|Actual Output*|
|---|---|---|---|---|---|
|L_01|	H_01|	Admin can delete records of employees|	22 units|	71.5 rupees|	71.5 rupees
|L_02|	H_01|	Admin can view records of employees|	50|	235|	235
|L_03|	H_01|	Admin can search employees|	150|	937.5|	937.5
|L_04|	H_01|	Admin can view records of employees|	230|	1,679	|1,679
