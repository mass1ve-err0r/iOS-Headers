//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@protocol UICoordinateSpace;

@protocol UICoordinateSpace <NSObject>
@property(readonly, nonatomic) struct CGRect bounds;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromCoordinateSpace:(id <UICoordinateSpace>)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toCoordinateSpace:(id <UICoordinateSpace>)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromCoordinateSpace:(id <UICoordinateSpace>)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toCoordinateSpace:(id <UICoordinateSpace>)arg2;
@end

