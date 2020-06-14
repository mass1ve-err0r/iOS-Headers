//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VNSizeRange : NSObject
{
    unsigned long long _minimumDimension;
    unsigned long long _maximumDimension;
    unsigned long long _idealDimension;
}

@property(readonly, nonatomic) unsigned long long idealDimension; // @synthesize idealDimension=_idealDimension;
@property(readonly, nonatomic) unsigned long long maximumDimension; // @synthesize maximumDimension=_maximumDimension;
@property(readonly, nonatomic) unsigned long long minimumDimension; // @synthesize minimumDimension=_minimumDimension;
- (_Bool)isAllowedDimension:(unsigned long long)arg1;
- (id)initWithMinimumDimension:(unsigned long long)arg1 maximumDimension:(unsigned long long)arg2 idealDimension:(unsigned long long)arg3;

@end

