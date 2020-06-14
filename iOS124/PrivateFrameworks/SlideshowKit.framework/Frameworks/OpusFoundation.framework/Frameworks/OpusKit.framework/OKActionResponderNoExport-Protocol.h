//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/NSObject-Protocol.h>

@class NSString, OFUIView, OKAction;

@protocol OKActionResponderNoExport <NSObject>
@property(readonly) OFUIView *actionView;
- (_Bool)interactivityEnabled;
- (_Bool)performActionScript:(NSString *)arg1 withAction:(OKAction *)arg2;
- (_Bool)canPerformAction:(OKAction *)arg1;
@end

