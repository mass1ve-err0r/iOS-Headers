//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol QLSExtensionThumbnailItem <NSObject>
@property(readonly, copy, nonatomic) NSString *contentType;
- (void)provideURLWrapper:(void (^)(FPSandboxingURLWrapper *, NSError *))arg1;
@end

