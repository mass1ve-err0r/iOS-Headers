//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, CAPackage, CAStateController, CCUICAPackageDescription;

@interface CCUICAPackageView : UIView
{
    CAStateController *_stateController;
    CALayer *_packageLayer;
    CAPackage *_package;
    CCUICAPackageDescription *_packageDescription;
}

@property(retain, nonatomic) CCUICAPackageDescription *packageDescription; // @synthesize packageDescription=_packageDescription;
@property(retain, nonatomic) CAPackage *package; // @synthesize package=_package;
- (void).cxx_destruct;
- (void)_setPackage:(id)arg1;
- (void)setStateName:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

