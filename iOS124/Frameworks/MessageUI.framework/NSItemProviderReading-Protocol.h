//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageUI/NSObject-Protocol.h>

@class NSArray, NSData, NSString;

@protocol NSItemProviderReading <NSObject>
+ (NSArray *)readableTypeIdentifiersForItemProvider;
+ (id)objectWithItemProviderData:(NSData *)arg1 typeIdentifier:(NSString *)arg2 error:(id *)arg3;
@end

