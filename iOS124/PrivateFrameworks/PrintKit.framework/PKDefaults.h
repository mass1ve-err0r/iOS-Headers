//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PKDefaults : NSObject
{
}

+ (void)addLastUsedPrinter:(id)arg1 duplexMode:(id)arg2 lastUsedSize:(struct CGSize)arg3 forPhoto:(_Bool)arg4;
+ (void)addLastUsedPrinter:(id)arg1 duplexMode:(id)arg2 lastUsedSize:(struct CGSize)arg3;
+ (id)lastUsedPrintersForPhoto:(_Bool)arg1;
+ (id)lastUsedPrinters;
+ (long long)printerLookupWithArray:(id)arg1 withTimeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

