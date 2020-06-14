//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface STAXCustomRotorProvider : NSObject
{
    NSSet *_cachedAvailableRotors;
    NSObject *_rootElement;
}

@property(nonatomic) __weak NSObject *rootElement; // @synthesize rootElement=_rootElement;
@property(readonly, copy, nonatomic) NSSet *cachedAvailableRotors; // @synthesize cachedAvailableRotors=_cachedAvailableRotors;
- (void).cxx_destruct;
- (id)graphSearchForAvailableCustomRotorsAndUpdateCache;
- (id)initWithRootElement:(id)arg1;
- (id)init;

@end

