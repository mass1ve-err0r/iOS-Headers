//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPUFoundation/NSObject-Protocol.h>

@class NSCoder;
@protocol UIStateRestoring;

@protocol UIStateRestoring <NSObject>

@optional
@property(readonly, nonatomic) Class objectRestorationClass;
@property(readonly, nonatomic) id <UIStateRestoring> restorationParent;
- (void)applicationFinishedRestoringState;
- (void)decodeRestorableStateWithCoder:(NSCoder *)arg1;
- (void)encodeRestorableStateWithCoder:(NSCoder *)arg1;
@end

