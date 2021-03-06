//
//  SBStock.h
//  SalesBook
//
//  Created by Andreas Kucher on 22.04.13.
//  Copyright (c) 2013 Siller AG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class SBVariant;

@interface SBStock : NSManagedObject

@property (nonatomic, retain) NSNumber * activeState;
@property (nonatomic, retain) NSDate * alternationDate;
@property (nonatomic, retain) NSString * availabilityState;
@property (nonatomic, retain) NSDate * creationDate;
@property (nonatomic, retain) NSDate * dateStock;
@property (nonatomic, retain) NSNumber * documentState;
@property (nonatomic, retain) NSDate * estimatiedDeliveryDate;
@property (nonatomic, retain) NSNumber * qty1;
@property (nonatomic, retain) NSNumber * qty2;
@property (nonatomic, retain) NSString * stockType;
@property (nonatomic, retain) NSDate * transferDate;
@property (nonatomic, retain) NSNumber * transferState;
@property (nonatomic, retain) NSString * uniqueID;
@property (nonatomic, retain) NSString * variantNumber;
@property (nonatomic, retain) SBVariant *variant;

@end
