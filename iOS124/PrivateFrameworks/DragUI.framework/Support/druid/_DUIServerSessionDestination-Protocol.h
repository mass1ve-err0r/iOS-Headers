//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, _DUIPotentialDrop;

@protocol _DUIServerSessionDestination
- (oneway void)enableKeyboardIfNeeded;
- (oneway void)sawDragEndEvent;
- (oneway void)requestDropWithOperation:(unsigned long long)arg1;
- (oneway void)takePotentialDrop:(_DUIPotentialDrop *)arg1;
- (oneway void)dirtyDestinationItems:(NSArray *)arg1;
@end

