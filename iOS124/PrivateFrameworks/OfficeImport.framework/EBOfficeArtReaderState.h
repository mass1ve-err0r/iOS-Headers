//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OABReaderState.h>

@class EBReaderState, EXReadState;

__attribute__((visibility("hidden")))
@interface EBOfficeArtReaderState : OABReaderState
{
    EBReaderState *mReaderState;
    EXReadState *mXmlDocumentState;
}

- (id)xmlDrawingState;
- (id)readerState;
- (void)dealloc;
- (id)initWithReaderState:(id)arg1;

@end

