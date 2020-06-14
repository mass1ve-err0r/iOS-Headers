//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXRuntime/NSObject-Protocol.h>

@class AXElementGroup;

@protocol AXGroupable <NSObject>
@property(nonatomic) AXElementGroup *parentGroup;
@property(readonly, nonatomic) struct CGRect frame;
- (AXElementGroup *)keyboardContainer;
- (_Bool)isGroup;
- (AXElementGroup *)highestAncestorGroup;
@end

