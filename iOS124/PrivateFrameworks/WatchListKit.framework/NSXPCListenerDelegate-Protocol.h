//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchListKit/NSObject-Protocol.h>

@class NSXPCConnection, NSXPCListener;

@protocol NSXPCListenerDelegate <NSObject>

@optional
- (_Bool)listener:(NSXPCListener *)arg1 shouldAcceptNewConnection:(NSXPCConnection *)arg2;
@end

