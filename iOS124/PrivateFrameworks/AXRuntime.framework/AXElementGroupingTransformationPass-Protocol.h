//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXRuntime/NSObject-Protocol.h>

@class AXElementGroup, AXElementGrouper;

@protocol AXElementGroupingTransformationPass <NSObject>
- (AXElementGroup *)transformGroup:(AXElementGroup *)arg1 forGrouper:(AXElementGrouper *)arg2;
- (_Bool)shouldTransformGroup:(AXElementGroup *)arg1 forGrouper:(AXElementGrouper *)arg2;
@end

