//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class UIViewController;

@protocol PUAlbumCreatorDelegate <NSObject>
- (_Bool)canPresentPicker;
- (void (^)(_Bool, NSString *))completionHandler;
- (UIViewController *)hostViewContoller;
@end

