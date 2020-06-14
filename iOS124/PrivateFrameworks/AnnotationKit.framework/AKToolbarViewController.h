//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AKController;

@interface AKToolbarViewController : UIViewController
{
    AKController *_controller;
}

+ (long long)buttonTypeForToolbarButtonItemOfType:(unsigned long long)arg1;
+ (id)alternateImageForToolbarButtonItemOfType:(unsigned long long)arg1;
+ (id)imageForToolbarButtonItemOfType:(unsigned long long)arg1;
+ (id)_imageNameForToolbarButtonItemOfType:(unsigned long long)arg1;
+ (id)titleForToolbarButtonItemOfType:(unsigned long long)arg1;
@property __weak AKController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (id)_toolbarButtonItemOfType:(unsigned long long)arg1;
- (void)setStrokeColorUIDisplayToColor:(id)arg1;
- (void)setFillColorUIDisplayToColor:(id)arg1;
- (void)revalidateItems;
@property(readonly) _Bool isPresentingPopover;
- (void)teardown;
- (id)initWithController:(id)arg1;

@end

