//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString;

@protocol _INPBCondition <NSObject>
@property(nonatomic) _Bool hasConditionalOperator;
@property(nonatomic) int conditionalOperator;
- (int)StringAsConditionalOperator:(NSString *)arg1;
- (NSString *)conditionalOperatorAsString:(int)arg1;
@end

