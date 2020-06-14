//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class SXPresentationAttributes;
@protocol SXPresentationAttributesObserver;

@protocol SXPresentationAttributesProvider <NSObject>
@property(readonly, nonatomic) SXPresentationAttributes *presentationAttributes;
- (void)removeObserver:(id <SXPresentationAttributesObserver>)arg1;
- (void)addObserver:(id <SXPresentationAttributesObserver>)arg1;
@end

