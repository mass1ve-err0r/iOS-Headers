//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIStatusBarRegionLinearLayout.h>

@interface _UIStatusBarRegionStackingLayout : _UIStatusBarRegionLinearLayout
{
    _Bool _hugging;
    long long _horizontalAlignment;
    double _interspace;
}

@property(nonatomic) _Bool hugging; // @synthesize hugging=_hugging;
@property(nonatomic) double interspace; // @synthesize interspace=_interspace;
@property(nonatomic) long long horizontalAlignment; // @synthesize horizontalAlignment=_horizontalAlignment;
- (_Bool)fitsAllItems;
- (id)_horizontalConstraintsForLayoutItems:(id)arg1 layoutGuides:(id)arg2;

@end

