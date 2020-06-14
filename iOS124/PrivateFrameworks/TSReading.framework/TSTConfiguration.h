//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSTConfiguration : NSObject
{
    _Bool mSupportsContainedTextEditing;
    _Bool mSupportsResumingTextEditing;
    _Bool mBeginEditingOnSingleTap;
    _Bool mSupportsMergedCells;
    _Bool mSupportsHiddenCells;
    _Bool mReturnWhileEditingNavigates;
    _Bool mTabWhileEditingNavigates;
    _Bool mArrowKeyAtEdgeWhileEditingNavigates;
    _Bool mArrowKeysWrap;
    _Bool mArrowKeysNavigateWhenEditingBeganByTyping;
    _Bool mBackTabWraps;
    _Bool mTabAtEdgeAddsRow;
    _Bool mTabAtEdgeAddsColumn;
    _Bool mPastesTile;
    _Bool mAllowHorizontalAutoresize;
    _Bool mSelectsCellOnInitialTap;
    _Bool mDragByHandleOnly;
    _Bool mCornersCanDragResize;
    _Bool mSupportsControlCells;
    _Bool mHasLargerFonts;
    _Bool mSupportsFrozenHeaders;
    _Bool mSupportsAutoResizedTables;
    _Bool mSupportsCreateChartFromSelection;
    _Bool mShowsAddressBarAlways;
    _Bool mShowsAddressBarHighlights;
    _Bool mShowsAddressBarLetteringAndNumbering;
    _Bool mSelectionUsesBezierPath;
    _Bool mUsesWholeChromeResizer;
    _Bool mSupportsCanvasReferenceEditing;
    _Bool mUsesLimitedAutomaticFormatParsing;
    _Bool mSupportsFormulaEditing;
    _Bool mSupportsImplicitEditing;
    _Bool mFormulaEqualsTokenIsSelectable;
    _Bool mAllowFreeformFormulaText;
    _Bool mAllowWhitespaceInFormulas;
    _Bool mRequireMatchedFunctionTokens;
    _Bool mShowsHideUnhideUI;
    _Bool mExportPermanentHidingState;
    _Bool mShowsCellOverflowIndicator;
    _Bool mSupportsAutofill;
    _Bool mUsesLimitedNumberFormatInspector;
    _Bool mHeadersFrozenByDefault;
    _Bool mCreateLargeDefaultTables;
    _Bool mTableNameEnabledInNewTables;
    _Bool mSupportsRowColumnAdderKnob;
    _Bool mSupportsDragDropMoveMode;
    _Bool mExportsCellComments;
    _Bool mExportsCellAnnotations;
    _Bool mSupportsRepeatHeaderRowsOnEachPage;
    _Bool _formulaEditorEvaluatesFormulas;
    _Bool _showReferenceHighlightsOnFormulaCellSelection;
    _Bool _tokenizeFormulaStringLiterals;
    _Bool _cellEditorsCanScrollToNonLocalTableSelection;
    _Bool _formulaCellEditorSupportsTextTokenEditor;
    _Bool _disableImplicitNaming;
    _Bool _supportsComplexFilterUI;
    _Bool _supportsQuickFilterUI;
    _Bool _pasteFilterHidingAsUserHiding;
    _Bool _allowsFullyFilteredTables;
    unsigned int mMaxNumberOfRows;
    unsigned int mMaxNumberOfColumns;
    unsigned int mMaxNumberOfPopulatedCells;
}

+ (void)resetSharedTableConfiguration;
+ (id)sharedTableConfiguration;
@property(nonatomic) _Bool allowsFullyFilteredTables; // @synthesize allowsFullyFilteredTables=_allowsFullyFilteredTables;
@property(nonatomic) _Bool pasteFilterHidingAsUserHiding; // @synthesize pasteFilterHidingAsUserHiding=_pasteFilterHidingAsUserHiding;
@property(nonatomic) _Bool supportsQuickFilterUI; // @synthesize supportsQuickFilterUI=_supportsQuickFilterUI;
@property(nonatomic) _Bool supportsComplexFilterUI; // @synthesize supportsComplexFilterUI=_supportsComplexFilterUI;
@property(nonatomic) _Bool disableImplicitNaming; // @synthesize disableImplicitNaming=_disableImplicitNaming;
@property(nonatomic) _Bool formulaCellEditorSupportsTextTokenEditor; // @synthesize formulaCellEditorSupportsTextTokenEditor=_formulaCellEditorSupportsTextTokenEditor;
@property(nonatomic) _Bool cellEditorsCanScrollToNonLocalTableSelection; // @synthesize cellEditorsCanScrollToNonLocalTableSelection=_cellEditorsCanScrollToNonLocalTableSelection;
@property(nonatomic) _Bool tokenizeFormulaStringLiterals; // @synthesize tokenizeFormulaStringLiterals=_tokenizeFormulaStringLiterals;
@property(nonatomic) _Bool showReferenceHighlightsOnFormulaCellSelection; // @synthesize showReferenceHighlightsOnFormulaCellSelection=_showReferenceHighlightsOnFormulaCellSelection;
@property(nonatomic) _Bool formulaEditorEvaluatesFormulas; // @synthesize formulaEditorEvaluatesFormulas=_formulaEditorEvaluatesFormulas;
@property(nonatomic) _Bool supportsRepeatHeaderRowsOnEachPage; // @synthesize supportsRepeatHeaderRowsOnEachPage=mSupportsRepeatHeaderRowsOnEachPage;
@property(nonatomic) _Bool exportsCellAnnotations; // @synthesize exportsCellAnnotations=mExportsCellAnnotations;
@property(nonatomic) _Bool exportsCellComments; // @synthesize exportsCellComments=mExportsCellComments;
@property(nonatomic) _Bool supportsDragDropMoveMode; // @synthesize supportsDragDropMoveMode=mSupportsDragDropMoveMode;
@property(nonatomic) _Bool supportsRowColumnAdderKnob; // @synthesize supportsRowColumnAdderKnob=mSupportsRowColumnAdderKnob;
@property(nonatomic) _Bool tableNameEnabledInNewTables; // @synthesize tableNameEnabledInNewTables=mTableNameEnabledInNewTables;
@property(nonatomic) _Bool createLargeDefaultTables; // @synthesize createLargeDefaultTables=mCreateLargeDefaultTables;
@property(nonatomic) _Bool headersFrozenByDefault; // @synthesize headersFrozenByDefault=mHeadersFrozenByDefault;
@property(nonatomic) _Bool usesLimitedNumberFormatInspector; // @synthesize usesLimitedNumberFormatInspector=mUsesLimitedNumberFormatInspector;
@property(nonatomic) _Bool supportsAutofill; // @synthesize supportsAutofill=mSupportsAutofill;
@property(nonatomic) _Bool showsCellOverflowIndicator; // @synthesize showsCellOverflowIndicator=mShowsCellOverflowIndicator;
@property(nonatomic) _Bool exportPermanentHidingState; // @synthesize exportPermanentHidingState=mExportPermanentHidingState;
@property(nonatomic) _Bool showsHideUnhideUI; // @synthesize showsHideUnhideUI=mShowsHideUnhideUI;
@property(nonatomic) _Bool requireMatchedFunctionTokens; // @synthesize requireMatchedFunctionTokens=mRequireMatchedFunctionTokens;
@property(nonatomic) _Bool allowWhitespaceInFormulas; // @synthesize allowWhitespaceInFormulas=mAllowWhitespaceInFormulas;
@property(nonatomic) _Bool allowFreeformFormulaText; // @synthesize allowFreeformFormulaText=mAllowFreeformFormulaText;
@property(nonatomic) _Bool formulaEqualsTokenIsSelectable; // @synthesize formulaEqualsTokenIsSelectable=mFormulaEqualsTokenIsSelectable;
@property(nonatomic) _Bool supportsImplicitEditing; // @synthesize supportsImplicitEditing=mSupportsImplicitEditing;
@property(nonatomic) _Bool supportsFormulaEditing; // @synthesize supportsFormulaEditing=mSupportsFormulaEditing;
@property(nonatomic) _Bool usesLimitedAutomaticFormatParsing; // @synthesize usesLimitedAutomaticFormatParsing=mUsesLimitedAutomaticFormatParsing;
@property(nonatomic) _Bool supportsCanvasReferenceEditing; // @synthesize supportsCanvasReferenceEditing=mSupportsCanvasReferenceEditing;
@property(nonatomic) _Bool usesWholeChromeResizer; // @synthesize usesWholeChromeResizer=mUsesWholeChromeResizer;
@property(nonatomic) _Bool selectionUsesBezierPath; // @synthesize selectionUsesBezierPath=mSelectionUsesBezierPath;
@property(nonatomic) _Bool showsAddressBarLetteringAndNumbering; // @synthesize showsAddressBarLetteringAndNumbering=mShowsAddressBarLetteringAndNumbering;
@property(nonatomic) _Bool showsAddressBarHighlights; // @synthesize showsAddressBarHighlights=mShowsAddressBarHighlights;
@property(nonatomic) _Bool showsAddressBarAlways; // @synthesize showsAddressBarAlways=mShowsAddressBarAlways;
@property(nonatomic) _Bool supportsCreateChartFromSelection; // @synthesize supportsCreateChartFromSelection=mSupportsCreateChartFromSelection;
@property(nonatomic) _Bool supportsAutoResizedTables; // @synthesize supportsAutoResizedTables=mSupportsAutoResizedTables;
@property(nonatomic) _Bool supportsFrozenHeaders; // @synthesize supportsFrozenHeaders=mSupportsFrozenHeaders;
@property(nonatomic) _Bool hasLargerFonts; // @synthesize hasLargerFonts=mHasLargerFonts;
@property(nonatomic) _Bool supportsControlCells; // @synthesize supportsControlCells=mSupportsControlCells;
@property(nonatomic) _Bool cornersCanDragResize; // @synthesize cornersCanDragResize=mCornersCanDragResize;
@property(nonatomic) _Bool dragByHandleOnly; // @synthesize dragByHandleOnly=mDragByHandleOnly;
@property(nonatomic) _Bool selectsCellOnInitialTap; // @synthesize selectsCellOnInitialTap=mSelectsCellOnInitialTap;
@property(nonatomic) _Bool allowHorizontalAutoresize; // @synthesize allowHorizontalAutoresize=mAllowHorizontalAutoresize;
@property(nonatomic) _Bool pastesTile; // @synthesize pastesTile=mPastesTile;
@property(nonatomic) _Bool tabAtEdgeAddsColumn; // @synthesize tabAtEdgeAddsColumn=mTabAtEdgeAddsColumn;
@property(nonatomic) _Bool tabAtEdgeAddsRow; // @synthesize tabAtEdgeAddsRow=mTabAtEdgeAddsRow;
@property(nonatomic) _Bool backTabWraps; // @synthesize backTabWraps=mBackTabWraps;
@property(nonatomic) _Bool arrowKeysNavigateWhenEditingBeganByTyping; // @synthesize arrowKeysNavigateWhenEditingBeganByTyping=mArrowKeysNavigateWhenEditingBeganByTyping;
@property(nonatomic) _Bool arrowKeysWrap; // @synthesize arrowKeysWrap=mArrowKeysWrap;
@property(nonatomic) _Bool arrowKeyAtEdgeWhileEditingNavigates; // @synthesize arrowKeyAtEdgeWhileEditingNavigates=mArrowKeyAtEdgeWhileEditingNavigates;
@property(nonatomic) _Bool tabWhileEditingNavigates; // @synthesize tabWhileEditingNavigates=mTabWhileEditingNavigates;
@property(nonatomic) _Bool returnWhileEditingNavigates; // @synthesize returnWhileEditingNavigates=mReturnWhileEditingNavigates;
@property(nonatomic) _Bool supportsHiddenCells; // @synthesize supportsHiddenCells=mSupportsHiddenCells;
@property(nonatomic) _Bool supportsMergedCells; // @synthesize supportsMergedCells=mSupportsMergedCells;
@property(nonatomic) _Bool beginEditingOnSingleTap; // @synthesize beginEditingOnSingleTap=mBeginEditingOnSingleTap;
@property(nonatomic) _Bool supportsResumingTextEditing; // @synthesize supportsResumingTextEditing=mSupportsResumingTextEditing;
@property(nonatomic) _Bool supportsContainedTextEditing; // @synthesize supportsContainedTextEditing=mSupportsContainedTextEditing;
@property(nonatomic) unsigned int maxNumberOfPopulatedCells; // @synthesize maxNumberOfPopulatedCells=mMaxNumberOfPopulatedCells;
@property(nonatomic) unsigned int maxNumberOfColumns; // @synthesize maxNumberOfColumns=mMaxNumberOfColumns;
@property(nonatomic) unsigned int maxNumberOfRows; // @synthesize maxNumberOfRows=mMaxNumberOfRows;
- (id)init;

@end

