//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface HFChildServiceFilter : NSObject
{
    NSSet *_childServiceTypes;
}

@property(readonly, copy, nonatomic) NSSet *childServiceTypes; // @synthesize childServiceTypes=_childServiceTypes;
- (void).cxx_destruct;
- (id)filteredChildServicesForParentService:(id)arg1;
- (id)initWithChildServiceTypes:(id)arg1;

@end

