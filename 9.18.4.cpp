function varargout = shafali(varargin)
% shafali MATLAB code for shafali.fig
%      shafali, by itself, creates a new shafali or raises the existing
%      singleton*.
%
%      H = shafali returns the handle to a new shafali or the handle to
%      the existing singleton*.
%
%      shafali('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in shafali.M with the given input arguments.
%
%      shafali('Property','Value',...) creates a new shafali or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before shafali_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to shafali_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help shafali

% Last Modified by GUIDE v2.5 17-Sep-2017 09:55:02

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @shafali_OpeningFcn, ...
                   'gui_OutputFcn',  @shafali_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin && ischar(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT


% --- Executes just before shafali is made visible.
function shafali_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to shafali (see VARARGIN)

% Choose default command line output for shafali
handles.output = hObject;
axes(handles.pic2)
imshow('g1.png')
axes(handles.pic1)
imshow('g2.png')
% Update handles structure
guidata(hObject, handles);

% UIWAIT makes shafali wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = shafali_OutputFcn(hObject, eventdata, handles)
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;


% --- Executes on button press in re.
function re_Callback(hObject, eventdata, handles)
% hObject    handle to re (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
R=str2num(get(handles.Rth,'string'));
V=str2num(get(handles.Vth,'string'));
t=2*R;
R1=(1:1:t);
r=R+R1;
I=V^2.*(r.^-1);
PL=(I.^2).*R1;
set(handles.PL,'string',num2str(PL))
axes(handles.graph)
plot(R1,PL,'*r--')
xlabel('RL-->')
ylabel('PL-->')

function Vth_Callback(hObject, eventdata, handles)
% hObject    handle to Vth (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of Vth as text
%        str2double(get(hObject,'String')) returns contents of Vth as a double


% --- Executes during object creation, after setting all properties.
function Vth_CreateFcn(hObject, eventdata, handles)
% hObject    handle to Vth (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    eshafaliy - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function Rth_Callback(hObject, eventdata, handles)
% hObject    handle to Rth (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of Rth as text
%        str2double(get(hObject,'String')) returns contents of Rth as a double


% --- Executes during object creation, after setting all properties.
function Rth_CreateFcn(hObject, eventdata, handles)
% hObject    handle to Rth (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function RL_Callback(hObject, eventdata, handles)
% hObject    handle to RL (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of RL as text
%        str2double(get(hObject,'String')) returns contents of RL as a double


% --- Executes during object creation, after setting all properties.
function RL_CreateFcn(hObject, eventdata, handles)
% hObject    handle to RL (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');

end

