//
//  TRArts.h
//  day06-practise
//
//  Created by Patrick Yu on 6/12/14.
//  Copyright (c) 2014 MobileApp. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TRArts : NSObject
@property (nonatomic,strong) NSString *author;
@property (nonatomic) int year;
-(void)print;
@end