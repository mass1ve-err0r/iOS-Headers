//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class MSSticker, MSStickerBrowserView;

@protocol MSStickerBrowserViewDataSource <NSObject>
- (MSSticker *)stickerBrowserView:(MSStickerBrowserView *)arg1 stickerAtIndex:(long long)arg2;
- (long long)numberOfStickersInStickerBrowserView:(MSStickerBrowserView *)arg1;
@end

