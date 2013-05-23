//
//  SAGVariantText.h
//  SalesBook
//
//  Created by Andreas Kucher on 06.03.13.
//  Copyright (c) 2013 Siller AG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SBVariantText : NSObject

+ (NSString *)localizedClassName;

+ (NSString *)webserviceUpdate;
+ (NSString *)webserviceDelete;
+ (NSString *)webserviceUniqueID;
+ (NSString *)webserviceActionState;
+ (NSString *)webserviceTransferDate;
+ (NSString *)webserviceBlockSize;
+ (NSString *)webserviceDataBlock;

+ (BOOL)updateDocumentFromDictionary:(NSDictionary *)dict;

@end
