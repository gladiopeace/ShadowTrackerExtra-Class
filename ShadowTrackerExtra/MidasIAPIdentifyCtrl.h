//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MidasIAPBaseViewCtrl.h"

#import "MidasIAPInputViewDelegate-Protocol.h"

@class MidasCommunicator, MidasIAPInputView, MidasIAPPayOperation, NSMutableDictionary, NSString, UIButton, UILabel, UIView;

@interface MidasIAPIdentifyCtrl : MidasIAPBaseViewCtrl <MidasIAPInputViewDelegate>
{
    unsigned long long _idType;
    unsigned long long _provinceId;
    unsigned long long _cityId;
    MidasCommunicator *_comm;
    struct CGRect _focusRect;
    id _tipsBelowCtrl;
    double _oriScrollViewHeight;
    NSMutableDictionary *_dictOriFrame;
    _Bool _inited;
    UIView *_cornerBack;
    CDUnknownBlockType _checkBlock;
    MidasIAPPayOperation *_op;
    UILabel *_bodyLb;
    UILabel *_tailLb;
    UILabel *_tipsLb;
    MidasIAPInputView *_nameTv;
    MidasIAPInputView *_idTypeTv;
    MidasIAPInputView *_idNumTv;
    UIButton *_selBtn;
    UIView *_selContainer;
}

@property(nonatomic) __weak UIView *selContainer; // @synthesize selContainer=_selContainer;
@property(nonatomic) __weak UIButton *selBtn; // @synthesize selBtn=_selBtn;
@property(nonatomic) __weak MidasIAPInputView *idNumTv; // @synthesize idNumTv=_idNumTv;
@property(nonatomic) __weak MidasIAPInputView *idTypeTv; // @synthesize idTypeTv=_idTypeTv;
@property(nonatomic) __weak MidasIAPInputView *nameTv; // @synthesize nameTv=_nameTv;
@property(nonatomic) __weak UILabel *tipsLb; // @synthesize tipsLb=_tipsLb;
@property(nonatomic) __weak UILabel *tailLb; // @synthesize tailLb=_tailLb;
@property(nonatomic) __weak UILabel *bodyLb; // @synthesize bodyLb=_bodyLb;
@property(retain, nonatomic) MidasIAPPayOperation *op; // @synthesize op=_op;
@property(copy, nonatomic) CDUnknownBlockType checkBlock; // @synthesize checkBlock=_checkBlock;
- (void).cxx_destruct;
- (void)inputViewWillReturn:(id)arg1;
- (void)inputViewDidLoseFocus:(id)arg1;
- (void)inputViewWillOnFocus:(id)arg1;
- (void)onStatusBarOrientationChanged;
- (void)onCancel:(id)arg1;
- (void)onConfirm:(id)arg1;
- (void)offsetChangeForKbShow:(float)arg1;
- (void)showProtocolTips;
- (id)getProtocolString;
- (id)getMessageString;
- (void)onNavToProtocolPage;
- (void)flashSelBtn:(_Bool)arg1;
- (void)clearTips;
- (void)showTips:(id)arg1 belowInput:(id)arg2;
- (void)resetAllInput;
- (void)onNetworkError:(long long)arg1;
- (void)onFailCode:(long long)arg1 innerCode:(id)arg2 msg:(id)arg3 isNetworkFail:(_Bool)arg4;
- (void)onSuccess;
- (_Bool)checkProtocol;
- (_Bool)checkLocation;
- (_Bool)checkName;
- (_Bool)checkIdCardNum;
- (void)setIdType:(unsigned long long)arg1;
- (void)onSelBtn:(id)arg1;
- (void)popUpIdTypeActionSheet;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

