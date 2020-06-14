//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/TIWordSearchOperation.h>

@class NSArray, NSString, TIMecabraIMLogger, TIWordSearch, TIWordSearchCandidateResultSet;

@interface TIWordSearchOperationGetCandidates : TIWordSearchOperation
{
    _Bool _predictionEnabled;
    _Bool _reanalysisMode;
    _Bool _hardwareKeyboardMode;
    NSString *_inputString;
    TIWordSearchCandidateResultSet *_results;
    id _target;
    NSArray *_geometryModelData;
    SEL _action;
    TIWordSearch *_wordSearch;
    TIMecabraIMLogger *_logger;
    unsigned long long _autocapitalizationType;
}

@property(readonly, nonatomic) unsigned long long autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
@property(readonly, nonatomic) TIMecabraIMLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) _Bool hardwareKeyboardMode; // @synthesize hardwareKeyboardMode=_hardwareKeyboardMode;
@property(retain) TIWordSearch *wordSearch; // @synthesize wordSearch=_wordSearch;
@property(readonly, nonatomic) _Bool reanalysisMode; // @synthesize reanalysisMode=_reanalysisMode;
@property(readonly, nonatomic) _Bool predictionEnabled; // @synthesize predictionEnabled=_predictionEnabled;
@property(readonly, nonatomic) SEL action; // @synthesize action=_action;
@property(readonly, nonatomic) NSArray *geometryModelData; // @synthesize geometryModelData=_geometryModelData;
@property(readonly, nonatomic) id target; // @synthesize target=_target;
@property(retain, nonatomic) TIWordSearchCandidateResultSet *results; // @synthesize results=_results;
@property(readonly, nonatomic) NSString *inputString; // @synthesize inputString=_inputString;
- (void).cxx_destruct;
- (void)completeSearchOnMainThreadWithResults:(id)arg1;
- (void)perform;
- (void)checkForCachedResults;
- (void)dealloc;
- (id)initWithWordSearch:(id)arg1 inputString:(id)arg2 predictionEnabled:(_Bool)arg3 reanalysisMode:(_Bool)arg4 autocapitalizationType:(unsigned long long)arg5 target:(id)arg6 action:(SEL)arg7 geometryModelData:(id)arg8 hardwareKeyboardMode:(_Bool)arg9 logger:(id)arg10;

@end

