//
//  ViewController.m
//  AvidAnalysisDemoIos
//
//  Created by Avidly on 2017/2/16.
//  Copyright © 2017年 Avidly. All rights reserved.
//

#import "ViewController.h"
#import <HolaStatisticalSDK/HolaStatisticalSDK.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)touchUpButton:(UIButton *)sender {
    switch (sender.tag) {
        case 0:
        {
            [self TLog:@"nil"];
            [HolaAnalysis logWithKey:@"noValue" value:nil];

        }
            break;
        case 1:
        {
            [self TLog:@"NSString"];
            [HolaAnalysis logWithKey:@"oneValue" value:@"oneValue"];
        }
            break;
        case 2:
        {
            [self TLog:@"NSArray"];
            NSDictionary *dict1 = [NSDictionary dictionaryWithObjectsAndKeys:@"Lily",@"name",@"man",@"sex",@20,@"age", nil];
            NSDictionary *dict2 = [NSDictionary dictionaryWithObjectsAndKeys:@"Lucy",@"name",@"woman",@"sex",@25,@"age", nil];
            NSArray *arr = [NSArray arrayWithObjects:dict1, dict2, nil];
            [HolaAnalysis logWithKey:@"arrayValue" value:arr];

        }
            break;
        case 3:
        {
            [self TLog:@"NSDict"];
            NSDictionary *dict = [NSDictionary dictionaryWithObjectsAndKeys:@"Lily",@"name",@"man",@"sex",@20,@"age", nil];
            [HolaAnalysis logWithKey:@"dictValue" value:dict];

        }
            break;
        case 4:
        {
            [self TLog:@"count"];
            [HolaAnalysis countWithKey:@"counter"];
            
        }
            break;
        case 5:
        {
            [self TLog:@"logPay"];
            [HolaAnalysis LogPaymentWithPlayerId:@"1234567" receiptDataString:@"0000000000000000000000000000000000000000000000000000000000000000"];
            
        }
            break;
        case 6:
        {
            [self TLog:@"guest"];
            [HolaAnalysis guestLoginWithGameId:@"11223344"];
            
        }
            break;
        case 7:
        {
            [self TLog:@"GAP"];
            [HolaAnalysis GAPLog];
            
        }
            break;
            
        default:
            break;
    }
}

- (void)TLog:(NSString *)str {
    NSLog(@"%@", str);
}

@end
