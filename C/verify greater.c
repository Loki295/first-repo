#/*include<stdio.h>
void main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b && a>c){
        printf("A is the greatest number");

    }else if(b>c){
        printf("B is greatest number");

    }else{
        printf("C is greatest number");
    }

}*/



<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Student Information Table</title>
    <style>
        /* Basic styling to make the table look clean and readable */
        body {
            font-family: Arial, sans-serif;
            margin: 40px;
            background-color: #f9f9f9;
        }
        h2 {
            color: #333;
        }
        table {
            width: 100%;
            border-collapse: collapse;
            margin-top: 20px;
            background-color: #fff;
            box-shadow: 0 2px 5px rgba(0,0,0,0.1);
        }
        th, td {
            padding: 12px;
            text-align: left;
            border-bottom: 1px solid #ddd;
        }
        th {
            background-color: #4CAF50;
            color: white;
        }
        tr:hover {
            background-color: #f5f5f5;
        }
    </style>
</head>
<body>

    <h2>Basic Student Information</h2>

    <table>
        <thead>
            <tr>
                <th>Roll No.</th>
                <th>Full Name</th>
                <th>Grade/Class</th>
                <th>Email Address</th>
            </tr>
        </thead>
        <tbody>
            <tr>
                <td>101</td>
                <td>Alex Johnson</td>
                <td>10th Grade</td>
                <td>alex.j@example.com</td>
            </tr>
            <tr>
                <td>102</td>
                <td>Maria Garcia</td>
                <td>11th Grade</td>
                <td>maria.g@example.com</td>
            </tr>
            <tr>
                <td>103</td>
                <td>Liam Smith</td>
                <td>10th Grade</td>
                <td>liam.s@example.com</td>
            </tr>
        </tbody>
    </table>

</body>
</html>
