//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGReverseTemplateJS-Protocol.h>

@class JSContext, JSVirtualMachine, NSMutableArray, NSString, NSURL, SGReverseTemplatesJSDataDetectors, _PASNotificationToken;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SGReverseTemplateJS : NSObject <SGReverseTemplateJS>
{
    JSVirtualMachine *_jsVM;
    NSMutableArray *_memoryMappedFiles;
    NSMutableArray *_memoryMappedFileNames;
    JSContext *_jsContext;
    SGReverseTemplatesJSDataDetectors *_dd;
    _PASNotificationToken *_assetUpdateToken;
    NSURL *_assetPath;
    NSString *_localeIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_memoryPressureQueue;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
}

+ (id)fakeFlightInformationWithAirlineCode:(id)arg1 flightNumber:(id)arg2 flightDate:(id)arg3;
- (void).cxx_destruct;
- (void)postHistoricalFlightInformationWithAirlineCode:(id)arg1 flightNumber:(id)arg2 flightDate:(id)arg3 andPayload:(id)arg4;
- (id)historicalFlightInformationWithAirlineCode:(id)arg1 flightNumber:(id)arg2 flightDate:(id)arg3;
- (id)_prepareArguments:(id)arg1;
- (id)_prepareEntity:(id)arg1;
- (id)outputExceptionsFromOutput:(id)arg1;
- (void)emailToJsonLd:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)schemaOrgToOutput:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)textMessageToOutput:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)emailToOutput:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)payloadToOutputWithEntryPoint:(id)arg1 arguments:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)shouldDownloadFull:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)payloadToOutputWithEntryPoint:(id)arg1 arguments:(id)arg2;
- (_Bool)shouldDownloadFull:(id)arg1;
- (void)holdXpcTransactionForShortDelay;
- (id)loadJSFromASCIIFile:(id)arg1;
- (id)sfFlightStatusToString:(int)arg1;
- (id)dictionaryFromTimezone:(id)arg1;
- (id)sfAirportToDictionnary:(id)arg1;
- (id)formattedDate:(id)arg1 withTimezone:(id)arg2;
- (id)sfFlightsToDictionnary:(id)arg1;
- (id)flightInformationWithAirlineCode:(id)arg1 flightNumber:(id)arg2 flightDate:(id)arg3;
- (id)md5Hash:(id)arg1;
- (id)mappedArrayBufferForFileName:(id)arg1;
- (void)initCurrentAsset;
- (id)loadTrieWithFileName:(id)arg1;
- (id)processLoadRequestWithFileName:(id)arg1;
- (void)setAssetPath:(id)arg1;
- (void)refreshAssetPath;
- (void)freeJSContext;
- (id)getJSContext;
- (void)dealloc;
- (id)_stringFromMemoryPressureStatus:(unsigned long long)arg1;
- (void)_handleMemoryPressureStatus:(unsigned long long)arg1;
- (id)init;

@end

