//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSTextCheckingResult.h>

@class NSString;

@interface NSSubstitutionCheckingResult : NSTextCheckingResult
{
    struct _NSRange _range;
    NSString *_replacementString;
}

+ (_Bool)supportsSecureCoding;
- (id)replacementString;
- (_Bool)_adjustRangesWithOffset:(long long)arg1;
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;
- (struct _NSRange)range;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithRange:(struct _NSRange)arg1 replacementString:(id)arg2;

@end
