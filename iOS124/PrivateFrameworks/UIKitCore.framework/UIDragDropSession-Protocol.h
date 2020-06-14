//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, UIView;

@protocol UIDragDropSession <NSObject>
@property(readonly, nonatomic, getter=isRestrictedToDraggingApplication) _Bool restrictedToDraggingApplication;
@property(readonly, nonatomic) _Bool allowsMoveOperation;
@property(readonly, nonatomic) NSArray *items;
- (_Bool)canLoadObjectsOfClass:(Class)arg1;
- (_Bool)hasItemsConformingToTypeIdentifiers:(NSArray *)arg1;
- (struct CGPoint)locationInView:(UIView *)arg1;
@end

