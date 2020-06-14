//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKColoringView.h>

#import <NanoTimeKitCompanion/NTKKeylineView-Protocol.h>

@class NSString, NTKKeylineTouchable, UIBezierPath, UIColor;

@interface _NTKKeylinePathView : NTKColoringView <NTKKeylineView>
{
    UIBezierPath *_path;
    NTKKeylineTouchable *touchable;
}

@property(retain, nonatomic) NTKKeylineTouchable *touchable; // @synthesize touchable;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithPath:(id)arg1;

// Remaining properties
@property(retain, nonatomic) UIColor *color;
@property(readonly, nonatomic) UIColor *contentColor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIColor *overrideColor;
@property(readonly) Class superclass;
@property(nonatomic) _Bool usesLegibility;

@end

