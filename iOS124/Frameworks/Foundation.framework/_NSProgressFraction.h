//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface _NSProgressFraction : NSObject <NSSecureCoding, NSCopying>
{
    long long _completed;
    long long _total;
    _Bool _overflowed;
}

+ (_Bool)supportsSecureCoding;
+ (id)fractionWithCompleted:(long long)arg1 total:(long long)arg2;
+ (id)fractionWithDouble:(double)arg1;
@property long long total; // @synthesize total=_total;
@property long long completed; // @synthesize completed=_completed;
- (_Bool)isNaN;
- (double)fractionCompleted;
- (_Bool)isFinished;
- (_Bool)isIndeterminate;
- (id)fractionBySimplifying;
- (void)simplify;
- (id)fractionByMultiplyingFraction:(id)arg1;
- (void)divideByValue:(long long)arg1;
- (void)multiplyByFraction:(id)arg1;
- (id)fractionBySubtractingFraction:(id)arg1;
- (void)subtractFraction:(id)arg1;
- (id)fractionByAddingFraction:(id)arg1;
- (void)addFraction:(id)arg1;
@property(readonly) _Bool overflowed;
- (id)description;
- (_Bool)isFractionCompletedEqual:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCompleted:(long long)arg1 total:(long long)arg2;
- (void)_simplifyFromDouble:(double)arg1;

@end

