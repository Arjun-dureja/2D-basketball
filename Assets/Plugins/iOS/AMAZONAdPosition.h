
/* 
* Copyright 2014 Amazon.com,
* Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the
* "License"). You may not use this file except in compliance
* with the License. A copy of the License is located at
*
* http://aws.amazon.com/apache2.0/
*
* or in the "license" file accompanying this file. This file is
* distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
* CONDITIONS OF ANY KIND, either express or implied. See the
* License for the specific language governing permissions and
* limitations under the License.
*/

//
//  AMAZONAdPosition.h
//


#import <Foundation/Foundation.h>
#import "AMAZONAd.h"
#import "AMAZONEnums.h"


@interface AMAZONAdPosition : NSObject

@property (atomic, strong) AMAZONAd * ad;
@property (atomic, assign) NSInteger xCoordinate;
@property (atomic, assign) NSInteger yCoordinate;
@property (atomic, assign) NSInteger width;
@property (atomic, assign) NSInteger height;

- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryValue;

@end
