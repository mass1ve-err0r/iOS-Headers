//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol UIDragSession;

__attribute__((visibility("hidden")))
@interface _UICollectionViewDragSourceControllerSessionState : NSObject
{
    id <UIDragSession> _dragSession;
}

@property(retain, nonatomic) id <UIDragSession> dragSession; // @synthesize dragSession=_dragSession;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) _Bool isActive;

@end

