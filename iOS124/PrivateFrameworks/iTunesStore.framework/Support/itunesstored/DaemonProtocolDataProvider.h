//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISProtocolDataProvider.h>

@interface DaemonProtocolDataProvider : ISProtocolDataProvider
{
    CDUnknownBlockType _willBeginProcessingDictionaryHandler;
}

@property(copy, nonatomic) CDUnknownBlockType willBeginProcessingDictionaryHandler; // @synthesize willBeginProcessingDictionaryHandler=_willBeginProcessingDictionaryHandler;
- (_Bool)processDictionary:(id)arg1 error:(id *)arg2;
- (void)_presentDialog:(id)arg1;
- (void)dealloc;

@end

