/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeRecipientView : MFComposeHeaderView <MFComposeRecipientAtomDelegate, MFCorecipientsIndicatorAtomDelegate, MFDragDestination, MFDragSource, UIGestureRecognizerDelegate, UITextFieldDelegate> {
    UIButton * _addButton;
    BOOL  _allowsDragAndDrop;
    struct __CFDictionary { } * _atomPresentationOptionsByRecipient;
    NSMutableDictionary * _atoms;
    UIFont * _baseFont;
    BOOL  _clearSelectionUIAfterFirstResponder;
    MFCorecipientsIndicatorAtom * _corecipientsIndicatorAtom;
    unsigned int  _defaultAtomPresentationOptions;
    NSTimer * _delayTimer;
    <MFComposeRecipientViewDelegate> * _delegate;
    BOOL  _deselectOnNextKeyboardInput;
    BOOL  _didIgnoreFirstResponderResign;
    int  _dragSourceOriginalIndex;
    BOOL  _editable;
    BOOL  _expanded;
    int  _hideLastAtomComma;
    double  _inputDelay;
    int  _maxRecipients;
    BOOL  _needsLayoutConstraintUpdate;
    BOOL  _needsReflow;
    BOOL  _parentIsClosing;
    BOOL  _picking;
    MFComposeRecipient * _placeholderRecipient;
    NSArray * _properties;
    NSMutableArray * _recipients;
    MFModernComposeRecipientAtom * _selectedAtom;
    BOOL  _separatorHidden;
    UITapGestureRecognizer * _tapGestureRecognizer;
    _MFMailRecipientTextField * _textField;
    NSArray * _textFieldConstraints;
    NSCountedSet * _uncommentedAddresses;
}

@property (nonatomic, readonly) UIView *addButton;
@property (nonatomic, copy) NSArray *addresses;
@property (nonatomic) BOOL allowsDragAndDrop;
@property (nonatomic, retain) UIFont *baseFont;
@property (nonatomic, readonly) MFCorecipientsIndicatorAtom *corecipientsIndicator;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned int defaultAtomPresentationOptions;
@property (nonatomic) <MFComposeRecipientViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didIgnoreFirstResponderResign;
@property (nonatomic) BOOL editable;
@property (nonatomic) BOOL expanded;
@property (readonly) unsigned int hash;
@property (nonatomic) int hideLastAtomComma;
@property (nonatomic) double inputDelay;
@property (nonatomic) int maxRecipients;
@property (nonatomic, readonly) int numberOfRowsOfTextInField;
@property (nonatomic, readonly) float offsetForRowWithTextField;
@property (nonatomic, retain) MFComposeRecipient *placeholderRecipient;
@property (nonatomic, readonly) NSArray *recipients;
@property (getter=isSeparatorHidden, nonatomic) BOOL separatorHidden;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) UITextField *textField;

- (void)_addRecord:(void*)arg1 identifier:(int)arg2;
- (void)_addUncommentedAddress:(id)arg1;
- (BOOL)_addable;
- (unsigned int)_addressAtomPresentationOptionsForRecipient:(id)arg1;
- (void)_cancelDelayTimer;
- (void)_delayTimerFired:(id)arg1;
- (void)_deleteSelectedAtom;
- (void)_deselectAtom;
- (int)_recipientIndexAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_reflowAnimated:(BOOL)arg1;
- (void)_removeAddressAtomPresentationOptionsForRecipient:(id)arg1;
- (void)_removeAllRecipients;
- (void)_removeUncommentedAddress:(id)arg1;
- (void)_setNeedsLayoutConstraintUpdate;
- (void)_setNeedsReflow;
- (BOOL)_shouldShowCorecipientsIndicatorAtom;
- (void)_tapGestureRecognized:(id)arg1;
- (float)_topRowTextWidth;
- (void)_updateLayoutConstraintsAndGetNumberOfRows:(out unsigned int*)arg1 textFieldWillBeLastRow:(out BOOL*)arg2;
- (void)addAddress:(id)arg1;
- (id)addButton;
- (void)addButtonClicked:(id)arg1;
- (void)addRecipient:(id)arg1;
- (void)addRecipient:(id)arg1 index:(unsigned int)arg2 animate:(BOOL)arg3;
- (void)addRecord:(void*)arg1 property:(int)arg2 identifier:(int)arg3;
- (id)addresses;
- (BOOL)allowsDrag;
- (BOOL)allowsDragAndDrop;
- (void)animatePlaceholderForDragFailure:(id)arg1;
- (id)baseFont;
- (BOOL)becomeFirstResponder;
- (void)clearAllAddressAtomPresentationOptions;
- (void)clearText;
- (void)composeRecipientAtomSelectNext:(id)arg1;
- (void)composeRecipientAtomSelectPrevious:(id)arg1;
- (void)composeRecipientAtomShowPersonCard:(id)arg1;
- (BOOL)containsAddress:(id)arg1;
- (id)corecipientsIndicator;
- (void)dealloc;
- (unsigned int)defaultAtomPresentationOptions;
- (id)delegate;
- (void)deselectComposeRecipientAtom:(id)arg1;
- (BOOL)didIgnoreFirstResponderResign;
- (void)didMoveToSuperview;
- (void)didTapShowCorecipientsForIndicatorAtom:(id)arg1 recipients:(id)arg2;
- (void)dragCompletedForItem:(id)arg1 success:(BOOL)arg2;
- (void)dragEntered:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)dragExited:(id)arg1;
- (id)dragInitiatedAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)dragStartedWithItem:(id)arg1;
- (void)dragUpdated:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)dropItem:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })dropRect;
- (BOOL)editable;
- (BOOL)expanded;
- (BOOL)finishEnteringRecipient;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForDraggedItem:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)hasContent;
- (int)hideLastAtomComma;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (double)inputDelay;
- (BOOL)isSeparatorHidden;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (void)keyboardInputChangedSelection:(id)arg1;
- (BOOL)keyboardInputShouldDelete:(id)arg1;
- (int)maxRecipients;
- (BOOL)mf_chooseSelectedSearchResultForTextField:(id)arg1;
- (void)mf_dismissSearchResults:(id)arg1;
- (BOOL)mf_presentSearchResultsForTextField:(id)arg1;
- (void)mf_recipientTextField:(id)arg1 didAddRecipientAddress:(id)arg2;
- (void)mf_selectNextSearchResultForTextField:(id)arg1;
- (void)mf_selectPreviousSearchResultForTextField:(id)arg1;
- (BOOL)mf_textFieldShowingSearchResults:(id)arg1;
- (int)numberOfRowsOfTextInField;
- (float)offsetForRowWithTextField;
- (void)parentDidClose;
- (void)parentWillClose;
- (id)placeholderRecipient;
- (id)recipients;
- (void)reflow;
- (void)refreshPreferredContentSize;
- (void)removeRecipient:(id)arg1;
- (void)selectComposeRecipientAtom:(id)arg1;
- (void)setAddressAtomPresentationOptions:(unsigned int)arg1 forRecipient:(id)arg2;
- (void)setAddresses:(id)arg1;
- (void)setAllowsDragAndDrop:(BOOL)arg1;
- (void)setBaseFont:(id)arg1;
- (void)setDefaultAtomPresentationOptions:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidIgnoreFirstResponderResign:(BOOL)arg1;
- (void)setEditable:(BOOL)arg1;
- (void)setExpanded:(BOOL)arg1;
- (void)setHideLastAtomComma:(int)arg1;
- (void)setInputDelay:(double)arg1;
- (void)setLabel:(id)arg1;
- (void)setMaxRecipients:(int)arg1;
- (void)setPlaceholderRecipient:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setProperty:(int)arg1;
- (void)setSeparatorHidden:(BOOL)arg1;
- (void)showCorecipientIndicator:(BOOL)arg1 withCorecipients:(id)arg2 animated:(BOOL)arg3;
- (id)supportedDropTypes:(id)arg1;
- (id)text;
- (void)textChanged:(id)arg1;
- (id)textField;
- (void)textFieldDidBecomeFirstResponder:(id)arg1;
- (void)textFieldDidResignFirstResponder:(id)arg1;
- (float)textFieldOffsetForNumberOfRowsToScroll:(unsigned int)arg1 numberOfRowsAboveField:(int)arg2;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (id)uncommentedAddresses;
- (id)viewForDragSource;
- (id)viewForDraggedItem:(id)arg1 atScale:(float)arg2;
- (id)viewForDrop;
- (void)willMoveToSuperview:(id)arg1;

@end
