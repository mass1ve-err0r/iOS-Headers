//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSUndoManager;

@interface TSKPopoverUndoObserver : NSObject
{
    NSUndoManager *mUndoManager;
    NSMutableSet *mPopoverBasedViewControllers;
    NSMutableSet *mPopoverControllers;
}

+ (id)sharedObserver;
@property(retain, nonatomic) NSUndoManager *observedUndoManager; // @synthesize observedUndoManager=mUndoManager;
- (void)removePopoverBasedViewController:(id)arg1;
- (void)addPopoverBasedViewController:(id)arg1;
- (void)removePopoverController:(id)arg1;
- (void)addPopoverController:(id)arg1;
- (void)undoManagerWillRedo:(id)arg1;
- (void)undoManagerWillUndo:(id)arg1;
- (void)dealloc;
- (id)init;

@end

