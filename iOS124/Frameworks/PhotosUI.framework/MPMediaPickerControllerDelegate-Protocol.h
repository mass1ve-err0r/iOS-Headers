//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class MPMediaItemCollection, MPMediaPickerController;

@protocol MPMediaPickerControllerDelegate <NSObject>

@optional
- (void)mediaPickerDidCancel:(MPMediaPickerController *)arg1;
- (void)mediaPicker:(MPMediaPickerController *)arg1 didPickMediaItems:(MPMediaItemCollection *)arg2;
@end

