//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DocumentCamera/NSObject-Protocol.h>

@class ICDocCamDocumentInfoCollection, ICDocCamImageCache, ICDocCamViewController, NSData;
@protocol DCDataCryptorDelegate, DCScanDataDelegate;

@protocol ICDocCamViewControllerDelegate <NSObject>
- (id <DCScanDataDelegate>)scanDataDelegateWithIdentifier:(id)arg1;
- (id <DCDataCryptorDelegate>)documentCameraControllerCreateDataCryptorIfNecessary;
- (_Bool)documentCameraController:(ICDocCamViewController *)arg1 canAddImages:(unsigned long long)arg2;
- (void)documentCameraControllerDidCancel:(ICDocCamViewController *)arg1;

@optional
- (ICDocCamImageCache *)documentCameraControllerImageCache;
- (void)documentCameraController:(ICDocCamViewController *)arg1 didFinishWithDocInfoCollection:(ICDocCamDocumentInfoCollection *)arg2 imageCache:(ICDocCamImageCache *)arg3 warnUser:(_Bool)arg4 closeViewController:(_Bool)arg5;
- (void)documentCameraController:(ICDocCamViewController *)arg1 didFinishWithDocInfoCollection:(ICDocCamDocumentInfoCollection *)arg2 imageCache:(ICDocCamImageCache *)arg3 warnUser:(_Bool)arg4;
- (void)documentCameraController:(ICDocCamViewController *)arg1 didFinishWithImage:(NSData *)arg2;
@end

