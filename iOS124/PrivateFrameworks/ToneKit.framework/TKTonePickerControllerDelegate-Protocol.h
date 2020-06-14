//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ToneKit/NSObject-Protocol.h>

@class NSArray, NSString, TKPickerRowItem, TKTonePickerController, TKTonePickerItem, TKTonePickerSectionItem;

@protocol TKTonePickerControllerDelegate <NSObject>

@optional
- (void)tonePickerController:(TKTonePickerController *)arg1 selectedToneWithIdentifier:(NSString *)arg2;
- (void)tonePickerController:(TKTonePickerController *)arg1 didUpdateFooterText:(NSString *)arg2 ofTonePickerSectionItem:(TKTonePickerSectionItem *)arg3;
- (void)tonePickerController:(TKTonePickerController *)arg1 didUpdateTonePickerItem:(TKTonePickerItem *)arg2;
- (void)tonePickerController:(TKTonePickerController *)arg1 didUpdateDownloadProgressOfTonePickerItem:(TKTonePickerItem *)arg2;
- (void)tonePickerController:(TKTonePickerController *)arg1 didUpdateDetailText:(NSString *)arg2 ofTonePickerItem:(TKTonePickerItem *)arg3;
- (void)tonePickerController:(TKTonePickerController *)arg1 didUpdateCheckedStatus:(_Bool)arg2 ofTonePickerItem:(TKTonePickerItem *)arg3;
- (void)tonePickerController:(TKTonePickerController *)arg1 didInsertPickerRowItems:(NSArray *)arg2 andTonePickerSectionItems:(NSArray *)arg3;
- (void)tonePickerController:(TKTonePickerController *)arg1 didDeletePickerRowItem:(TKPickerRowItem *)arg2 completion:(void (^)(void))arg3;
- (void)tonePickerControllerDidReloadTones:(TKTonePickerController *)arg1;
@end

