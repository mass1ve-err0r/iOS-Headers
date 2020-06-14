//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOMapRequest.h>

@class GEOZilchDecoder, NSError, NSObject;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface GEOZilchDecoderRequest : GEOMapRequest
{
    struct unique_ptr<geo::ZilchMapModel, std::__1::default_delete<geo::ZilchMapModel>> _mapModel;
    GEOZilchDecoder *_decoder;
    shared_ptr_27244a92 _message;
    CDUnknownBlockType _pathHandler;
    CDUnknownBlockType _errorHandler;
    NSError *_firstTileLoadingError;
    NSObject<OS_dispatch_semaphore> *_finishedSemaphore;
}

@property(copy) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(copy) CDUnknownBlockType pathHandler; // @synthesize pathHandler=_pathHandler;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancel;
- (void)decodeWithPathHandler:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)_finishedDecodingWithPath:(Path_7b702847)arg1;
- (id)initWithDecoder:(id)arg1 message:(shared_ptr_27244a92)arg2;

@end

